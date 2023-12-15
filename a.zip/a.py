from selenium import webdriver
import urllib.request

# Set up the browser
browser = webdriver.Chrome()
url = 'https://www.flipkart.com/'
browser.get(url)

browser.quit()
