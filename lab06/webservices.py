from flask import Flask
from flask import jsonify
from flask import request

app = Flask(__name__)

converte=[
  {
  'real' : '5',
  'dolar': '2',
  'euro' : '3'
  }
]

@app.route('/convertemoeda/<VALORES>',methods=['PUT'])
def convertemoeda(VALORES):
  em = [emp for emp in converte if (emp['real'] == VALORES)]
  if 'dolar' in request.json:
    em[0]['dolar'] = request.json['dolar']
  if 'euro' in request.json:
    em[0]['euro'] = request.json['euro']
  return jsonify({'emp':em[0]})

if __name__ == '__main__':
  app.run()
