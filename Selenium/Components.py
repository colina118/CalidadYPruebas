from selenium import webdriver
from selenium.webdriver.common.by import By
driver = webdriver.Firefox()
driver.get("http://nitrowriters.com/form/form.html")

txt = driver.find_element_by_id("my_text_field")
txt.send_keys("Esto se va a sobrescribir")


txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("Este es un primer ejemplo")

descriptions = driver.find_elements(By.CLASS_NAME, "description")
#for desc in descriptions:
    #print(desc.text)

txtArea = driver.find_elements(By.TAG_NAME, "textarea")
for txtA in txtArea:
    txtA.send_keys("Llenando los text areas")

link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
#link.click()

inputs = driver.find_elements(By.TAG_NAME, "input")
for inp in inputs:
    if inp.get_attribute("type") == "text":
        inp.send_keys("Llenando inputs de texto")

#Universal Selector CSS
print("\nUniversal Selector")
cssUni = driver.find_element(By.CSS_SELECTOR, "*")
print(cssUni.text)

cssUniversal = driver.find_elements(By.CSS_SELECTOR, "* option")
for uni in cssUniversal:
    print(uni.text)

#Grouping Selector CSS
print("\nGrouping Selector")
cssGrouping = driver.find_elements(By.CSS_SELECTOR, "h1, p")
for group in cssGrouping:
    print(group.text)

#Descendant Selector CSS
print("\nDescendant Selector")
cssDescendant = driver.find_elements(By.CSS_SELECTOR, "div a")
for desc in cssDescendant:
    print(desc.text)

#Child Selector CSS
print("\nChild Selector")
cssChild = driver.find_elements(By.CSS_SELECTOR, "li > label")
for child in cssChild:
    print(child.text)

#Adjacent Selector CSS
print("\nAdjacent Selector")
cssAdj = driver.find_elements(By.CSS_SELECTOR, "label + span")
for adj in cssAdj:
    print(adj.text)

#General Selector CSS
print("\nGeneral Selector")
cssGeneral = driver.find_elements(By.CSS_SELECTOR, "h2 ~ p")
for gen in cssGeneral:
    print(gen.text)

#Class Selector CSS
print("\nClass Selector")
cssClass = driver.find_elements(By.CSS_SELECTOR, ".description")
for clas in cssClass:
    print(clas.text)

#id Selector CSS
print("\nId selector")
cssId = driver.find_elements(By.CSS_SELECTOR, "#my_description")
for ids in cssId:
    print(ids.text)

#Pseudo Classes Selector CSS
print("\nPseudo Element Selector")
cssPseudo = driver.find_elements(By.CSS_SELECTOR, "a:link")
for pseudo in cssPseudo:
    print(pseudo.text)
