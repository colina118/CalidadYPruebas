from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import Select
driver = webdriver.Firefox()
driver.get("http://micampus.csf.itesm.mx/index.php/division-de-diseno-ingenieria-y-arquitectura/directorio")

cssUniversal = driver.find_elements(By.CSS_SELECTOR, "tr > td")
cont = 0;
nombres = []
emails = []
for uni in cssUniversal:
    uni = (uni.text.split("\n")[0])
    if cont == 0:
        nombres.append(uni)
    if cont == 3:
        emails.append(uni)
    cont = cont + 1
    if cont >= 4:
        cont = 0

for x in range(0, len(nombres)):
    print(nombres[x])
    print(emails[x])

driver.get("http://blazedemo.com/")

for x in range(0, len(nombres)):
        buttonHome = driver.find_element(By.LINK_TEXT, "home")
        buttonHome.click()

        buttonRegister = driver.find_element(By.LINK_TEXT, "Register")
        buttonRegister.click()

        nameRegister = driver.find_element(By.ID, "name")
        nameRegister.send_keys(nombres[x])

        companyRegister = driver.find_element(By.ID, "company")
        companyRegister.send_keys("ITESM")

        mailRegister = driver.find_element(By.ID, "email")
        mailRegister.send_keys(emails[x] + "j")

        passRegister = driver.find_element(By.ID, "password")
        passRegister.send_keys("123456")

        confirmRegister = driver.find_element(By.ID, "password-confirm")
        confirmRegister.send_keys("123456")

        inputs = driver.find_elements(By.TAG_NAME, "button")
        for inp in inputs:
            if inp.get_attribute("type") == "submit":
                print(inp.text)
                inp.click()
        try:
            WebDriverWait(driver, 5).until(EC.text_to_be_present_in_element((By.CLASS_NAME, "panel-body"), "You are logged in!"))
            dropdownButton = driver.find_element(By.CLASS_NAME, "dropdown-toggle")
            dropdownButton.click()
            logoutButton = driver.find_element(By.LINK_TEXT, "Logout")
            logoutButton.click()
        finally:
            driver.get("http://blazedemo.com/")

for x in range (0, 6):
    buttonHome = driver.find_element(By.LINK_TEXT, "home")
    buttonHome.click()

    mail = driver.find_element(By.ID, "email")
    mail.send_keys(emails[x] + "i")

    passw = driver.find_element(By.ID, "password")
    passw.send_keys("123456")

    inputs = driver.find_elements(By.TAG_NAME, "button")
    for inp in inputs:
        if inp.get_attribute("type") == "submit":
            inp.click()

    driver.get("http://blazedemo.com/")

    selectFrom = Select(driver.find_element(By.NAME, "fromPort"))
    selectFrom.select_by_index(x)

    selectTo = Select(driver.find_element(By.NAME, "toPort"))
    selectTo.select_by_index(x)

    inputs = driver.find_elements(By.TAG_NAME, "input")
    for inp in inputs:
        if inp.get_attribute("type") == "submit":
            inp.click()

    inputsFligths = driver.find_elements(By.TAG_NAME, "input")
    inputsFligths[0].click()

    nombre = driver.find_element(By.ID, "inputName")
    nombre.send_keys(nombres[x])

    address = driver.find_element(By.ID, "address")
    address.send_keys("Tec de Monterrey Campus Santa Fe")

    city = driver.find_element(By.ID, "city")
    city.send_keys("Ciudad de Mexico")

    state = driver.find_element(By.ID, "state")
    state.send_keys("CDMX")

    zipC = driver.find_element(By.ID, "zipCode")
    zipC.send_keys("05100")

    creditCard = driver.find_element(By.ID, "creditCardNumber")
    creditCard.send_keys("100499284509")

    cardName = driver.find_element(By.ID, "nameOnCard")
    cardName.send_keys(nombres[x])

    inputs = driver.find_elements(By.TAG_NAME, "input")
    for inp in inputs:
        if inp.get_attribute("type") == "submit":
            inp.click()

    buttonHome = driver.find_element(By.LINK_TEXT, "home")
    buttonHome.click()

    dropdownButton = driver.find_element(By.CLASS_NAME, "dropdown-toggle")
    dropdownButton.click()
    logoutButton = driver.find_element(By.LINK_TEXT, "Logout")
    logoutButton.click()


#for x in range (0, len(cssUniversal)):
#    print(cssUniversal[x][0])
