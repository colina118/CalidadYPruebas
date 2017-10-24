from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import Select

driver = webdriver.Firefox()
driver.get("http://127.0.0.1:4000/admin")

loginInput = driver.find_element_by_id("input-username")
loginInput.send_keys("admin")
loginPass = driver.find_element_by_id("input-password")
loginPass.send_keys("admin")
loginBtn = driver.find_element(By.XPATH, '//*[@id="content"]/div/div/div/div/div[2]/form/div[3]/button')
loginBtn.click()

catalog = driver.find_element(By.XPATH, '//*[@id="menu-catalog"]/a')
catalog.click()
products = driver.find_element(By.XPATH, '//*[@id="collapse1"]/li[2]/a')
products.click()
products = driver.find_element(By.XPATH, '//*[@id="collapse1-1"]/li[1]/a')
products.click()
addNew = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/a')
addNew.click()
pName = driver.find_element(By.XPATH, '//*[@id="input-name1"]')
pName.send_keys("Nintendo Switch")
pMetaTag = driver.find_element(By.XPATH, '//*[@id="input-meta-title1"]')
pMetaTag.send_keys("Hola")
dataTab = driver.find_element(By.XPATH, '//*[@id="form-product"]/ul/li[2]/a')
dataTab.click()
model = driver.find_element(By.XPATH, '//*[@id="input-model"]')
model.send_keys("El nuevo modelo")
saveBtn = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/button')
saveBtn.click()


addNew = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/a')
addNew.click()
pName = driver.find_element(By.XPATH, '//*[@id="input-name1"]')
pName.send_keys("Nintendo Wii")
pMetaTag = driver.find_element(By.XPATH, '//*[@id="input-meta-title1"]')
pMetaTag.send_keys("Hola")
dataTab = driver.find_element(By.XPATH, '//*[@id="form-product"]/ul/li[2]/a')
dataTab.click()
model = driver.find_element(By.XPATH, '//*[@id="input-model"]')
model.send_keys("El viejo modelo")
saveBtn = driver.find_element(By.XPATH, '//*[@id="content"]/div[1]/div/div/button')
saveBtn.click()

driver.get("http://127.0.0.1:4000")

search = driver.find_element(By.XPATH, '//*[@id="search"]/input')
search.send_keys("Nintendo Switch")
searchBtn = driver.find_element(By.XPATH, '//*[@id="search"]/div/button')
searchBtn.click()
addBtn = driver.find_element(By.XPATH, '//*[@id="content"]/div[3]/div[1]/div/div[2]/div[2]/button[1]')
addBtn.click()

search = driver.find_element(By.XPATH, '//*[@id="search"]/input')
search.clear()
search.send_keys("Nintendo Wii")
searchBtn = driver.find_element(By.XPATH, '//*[@id="search"]/div/button')
searchBtn.click()
addBtn = driver.find_element(By.XPATH, '//*[@id="content"]/div[3]/div[1]/div/div[2]/div[2]/button[1]')
addBtn.click()

checkOutBtn = driver.find_element(By.XPATH, '//*[@id="cart"]/button')
checkOutBtn.click()
