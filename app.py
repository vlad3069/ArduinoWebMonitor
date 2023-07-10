from flask import Flask, render_template

files = 'tempserial.txt'

app = Flask(__name__)


@app.route("/")
def index():
    with open(files, 'r') as file:
        for line in file:
            return render_template('index.html', line=line)


if __name__ == "__main__":
    app.run(debug=True)
