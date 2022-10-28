Para executar o código:

cd compDistr/lab06

export FLASK_APP=webservices.py

flask run --host=0.0.0.0

<img width="771" alt="Screen Shot 2022-10-28 at 16 53 54" src="https://user-images.githubusercontent.com/64480334/198721248-6e2e2752-ce6a-4e47-a3b7-ddad6d34371a.png">

Entrar no ip público da instancia com :5000/convertemoeda/<valor> para executar em apenas uma máquina:
<img width="600" alt="Screen Shot 2022-10-28 at 16 56 58" src="https://user-images.githubusercontent.com/64480334/198721672-c1399a03-290e-49b1-afc5-e2a03b427ec6.png">

  
Código sendo executado no load-balancer:
  
5 reais:
<img width="788" alt="Screen Shot 2022-10-28 at 16 48 38" src="https://user-images.githubusercontent.com/64480334/198721024-cbf7a7bc-a552-4adc-82e5-89377aef049c.png">

80 reais:
<img width="789" alt="Screen Shot 2022-10-28 at 16 53 28" src="https://user-images.githubusercontent.com/64480334/198721162-6b35b826-2827-4de2-909e-74060666e53e.png">
