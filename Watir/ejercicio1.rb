require 'watir'
browser = Watir::Browser.new :firefox

browser.goto 'blazedemo.com'

browser.select_list(name:'fromPort').options[3].select
browser.select_list(name:'toPort').options[2].select
browser.button(value:'Find Flights').click
browser.buttons(value:'Choose This Flight').last.click
browser.inputs(type: 'text').each do | input |
    input.set "Ariel no hagas examen"
end
browser.select_list(name:'cardType').options[2].select
browser.checkbox(name:'rememberMe').set
browser.button(value:'Purchase Flight').click
