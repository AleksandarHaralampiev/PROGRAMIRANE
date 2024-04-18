
from flask import Flask, request, jsonify
from sqlalchemy import create_engine

app = Flask(__name__)

@app.route('/factorial', methods=['GET'])
def factorial():
    n = int(request.args.get('n'))
    result = 1
    for i in range(1, n+1):
        result *= i
    return jsonify({'result': result})



if __name__ == '__main__':
    app.run()