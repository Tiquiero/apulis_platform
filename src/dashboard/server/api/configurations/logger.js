const config = require('config')
const logger = require('koa-pino-logger')

/**
 * @param {import('koa')} app
 */
module.exports = (app) => {
  const level = {
    test: 'silent',
    development: 'debug',
    production: 'info'
  }[app.env]
  const prettyPrint = app.env === 'development'
  const middleware = logger({ prettyPrint, level })

  // Log the config
  middleware.logger.info(config.util.toObject(), 'App config')

  app.use(middleware)
}
