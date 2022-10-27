from flask import Flask
import requests

app = Flask(__name__)

@app.route("/",methods=['GET'])
def loadBalancer():
  return "Success", 200

@app.route('/convertemoeda/<valor>',methods=['GET'])
def convertemoeda(valor):
  url = "https://economia.awesomeapi.com.br/json/last/USD-BRL,EUR-BRL"

  response = requests.get(url)
  response_json = response.json()
  dolar = response_json.get("USDBRL").get("low")
  euro = response_json.get("EURBRL").get("low")

  usd = float(dolar)
  eur = float(euro)
  real = float(valor)
  
  resp = f"real pra dolar: {real/usd}" + f"real pra euro: {real/eur}" 
  print("dollar: ")
  print(usd)
  return resp

if __name__ == '__main__':
 app.debug = True
 app.run()
