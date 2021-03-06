ó
{º^c           @   sÝ   d  d l  Z  d  d l Z d  d l m Z m Z m Z d   Z d   Z d   Z d   Z	 d   Z
 d d	  Z d
   Z d   Z d   Z d   Z d   Z d   Z d   Z d   Z d   Z d   Z d   Z d   Z d S(   iÿÿÿÿN(   t   exec_cmd_localt   execute_or_dump_locallyt   keep_widest_subnetc         C   s   d |  d k r d GHd  S|  d d } d } t  |  } | | k rc d j |  } t  |  } n  | t  | t  k s~ t  d  S(   Nt   subscriptiont   azure_clusters   No subscription to sets2   az account list | grep -A5 -B5 '"isDefault": true's"   az account set --subscription "{}"(   R    t   formatt   Truet   AssertionError(   t   configR   t   chkcmdt   outputt   setcmdt   setout(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   set_subscription	   s    c   	      C   sÍ   |  d d } |  d d } d | | f } t  |  } g  } yr t j |  } | j d  } | d  k	 r | d k r | j |  n  | j d  } | d  k	 r¯ | | 7} n  Wn t k
 rÈ d GHn X| S(	   NR   t   resource_groupt   nsg_names   
        az network nsg rule show             --resource-group %s             --nsg-name %s             --name whitelist
        t   sourceAddressPrefixt    t   sourceAddressPrefixessD   Exception when parsing whitelist response. Ignore existing whitelist(   R    t   jsont   loadst   gett   Nonet   appendt	   Exception(	   R   R   R   t   cmdR
   t   source_address_prefixest   datat   sourcet   sources(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt!   whitelist_source_address_prefixes   s"    
	c   	      C   s/  t  |   } t |  d k rz |  d d } | j d  } | d  k rV d GHt   n  t | t  rz | j d  } qz n  | d  k	 r¨ | d k r¨ | | j d  7} n  t |  } d j	 t
 t |    } |  d	 d
 } |  d	 d } |  d d } d | | | | f } t | | j | j | j  d  S(   Ni    t   cloud_config_nsg_rulest   dev_networkt   source_addresses_prefixess5   Please setup source_addresses_prefixes in config.yamlt    R   t   ,R   R   R   t   tcp_port_rangess'  
        az network nsg rule create             --resource-group %s             --nsg-name %s             --name whitelist             --protocol tcp             --priority 1005             --destination-port-ranges %s             --source-address-prefixes %s             --access allow
        (   R   t   lenR   R   t   exitt
   isinstancet   strt   splitR   t   joint   listt   setR   t   verboset   dryrunR
   (	   R   t   argst   ipsR   R    R   R   R$   R   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   add_nsg_rule_whitelist8   s*    

c   	      C   sÜ   t  |   } | d  k	 r6 | d k r6 | j d  } n  |  d d } |  d d } g  } x* | D]" } | | k r_ | j |  q_ q_ Wt |  d k r  d GHd  Sd | | d	 j |  f } t | | j | j | j	  d  S(
   NR   R#   R   R   R   i    s=   Nothing will be left in whitelist, please use delete command!s­   
        az network nsg rule update             --resource-group %s             --nsg-name %s             --name whitelist             --source-address-prefixes %s 
        R"   (
   R   R   R)   R   R%   R*   R   R-   R.   R
   (	   R   R/   R0   R   R   R   t   new_source_address_prefixest   prefixR   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   remove_nsg_rule_whiteliste   s     c         C   sL   |  d d } |  d d } d | | f } t  | | j | j | j  d  S(   NR   R   R   s   
        az network nsg rule delete             --resource-group %s             --nsg-name %s             --name whitelist
        (   R   R-   R.   R
   (   R   R/   R   R   R   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   delete_nsg_rule_whitelist   s
    
t   tcpc         C   sC   d |  | d | | | | | f } t  | | j | j | j  d  S(   Ns  
        az network nsg rule create             --resource-group %s             --nsg-name %s             --name %s             --protocol %s             --priority %s             --destination-port-ranges %s             --source-address-prefixes %s             --access allow
        s   allow_%s(   R   R-   R.   R
   (   R   R   t   priorityt   port_rangest   service_tagR/   t   protocolR   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt    create_nsg_rule_with_service_tag   s    
c         C   s7   d |  | d | f } t  | | j | j | j  d  S(   Ns|   
        az network nsg rule delete             --resource-group %s             --nsg-name %s             --name %s
        s   allow_%s(   R   R-   R.   R
   (   R   R   R9   R/   R   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt    delete_nsg_rule_with_service_tag«   s    c         C   sì   |  d } | j  d g   } t | t  s8 d | GHd  S| j  d  } | d  k r[ d GHn  d } t |  | k r d | GHn  |  d d	 } |  d d
 } d } xD t | |   D]2 \ }	 }
 d |
 GHt | | | |	 | |
 |  q² Wd  S(   NR   t   service_tagssI   service_tags %s is not a list. Skip creating nsg rules with service tags.R$   sJ   tcp_port_ranges does not exist. Skip creating nsg rules with service tags.i2   sH   Creating up to %s nsg rules with service tags. The rest will be ignored.R   R   R   i¶  s$   Creating nsg rule for service tag %s(   R   R'   R+   R   R%   t	   enumerateR;   (   R   R/   t	   nsg_rulesR=   R$   t	   max_rulesR   R   t   base_priorityt   iR9   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt"   create_nsg_rules_with_service_tags¸   s0    
		c   	      C   sº   |  d } | j  d g   } t | t  s8 d | GHd  S|  d d } |  d d } x_ t |  D]Q \ } } y  d | GHt | | | |  Wqa t k
 r± } d | | f GHqa Xqa Wd  S(	   NR   R=   sI   service_tags %s is not a list. Skip deleting nsg rules with service tags.R   R   R   s$   Deleting nsg rule for service tag %ss4   Failed to delete nsg rule for service tag %s. Ex: %s(   R   R'   R+   R>   R<   R   (	   R   R/   R?   R=   R   R   RB   R9   t   e(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt"   delete_nsg_rules_with_service_tagsÙ   s$    
	c         C   s+   |  j  d  } | d  k	 r | S|  d d S(   Nt   cluster_nameR   (   R   R   (   R   RF   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   get_cluster_nameñ   s    c         C   s#   t  |   | k r |  |  }  n  |  S(   N(   R%   (   t   namet   max_len(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   gen_name_with_max_lenú   s    c         C   sM   t  |   j   } d j g  | D] } | j   r | ^ q  } t | d  S(   NR   i   (   RG   t   lowerR*   t   isalnumRJ   (   R   RH   t   c(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt    gen_logging_storage_account_name   s    .c         C   sY   t  |   j   } d j g  | D]$ } | j   s= | d k r | ^ q  } t | d  S(   NR   t   -i?   (   RG   RK   R*   RL   RJ   (   R   RH   RM   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   gen_logging_container_name	  s    :c         C   sU   t  |   } |  d d } d | | f } t | | j | j | j  } | j d  S(   NR   R   s±   
        az storage account show-connection-string             --name %s             --resource-group %s             --query 'connectionString'             --output tsv
        s   
(   RN   R   R-   R.   R
   t   strip(   R   R/   t   storage_account_nameR   R   t   connection_string(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   get_connection_string  s    
c         C   sZ   t  |   } t |  |  } d | | f } d | | f GHt | | j | j | j  d  S(   Nsh   
        az storage container create             --name %s             --connection-string '%s'
        s7   Creating logging container %s with connection string %s(   RP   RT   R   R-   R.   R
   (   R   R/   t   container_nameRS   R   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   create_logging_container$  s    
c         C   sj   t  |   } |  d d } |  d d } d | | | f } d | | f GHt | | j | j | j  d  S(   NR   R   t   azure_locations×   
        az storage account create             --name %s             --resource-group %s             --access-tier Hot             --kind StorageV2             --sku Standard_RAGRS             --location %s
        s0   Creating storage account %s in resource group %s(   RN   R   R-   R.   R
   (   R   R/   RR   R   t   locationR   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   create_logging_storage_account3  s    	
c         C   sY   t  |   } |  d d } d | | f } d | | f GHt | | j | j | j  d  S(   NR   R   ss   
        az storage account delete             --name %s             --resource-group %s             --yes
        s0   Deleting storage account %s in resource group %s(   RN   R   R-   R.   R
   (   R   R/   RR   R   R   (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   delete_logging_storage_accountH  s    
c         C   s|   t  |  |  } t |   } i i t d 6| d 6| d 6d 6} | GHt j |  GHt d d   } t j | |  Wd  QXd  S(   Nt   enabledRS   RU   t   azure_blob_logs   logging_config.yamlt   w(   RT   RP   R   t   yamlt   dumpt   open(   R   R/   RS   RU   t   logging_configt   f(    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt1   get_connection_string_for_logging_storage_accountX  s    (   R   R^   t   utilsR    R   R   R   R   R1   R4   R5   R;   R<   RC   RE   RG   RJ   RN   RP   RT   RV   RY   RZ   Rc   (    (    (    sE   /home/pengbifeng/01_dlws/DLWorkspace/src/ClusterBootstrap/az_utils.pyt   <module>   s(   		 	-	 			!												