class Stack:
    """
    cjh437
    This class is used to manipulate the stack storing the HTML code
    """
    # Constructor
    def __init__(self):
        self.items = []
    # Method to check if the stack is empty
    def is_empty(self):
        return self.items == []
    # Method to add items to the stack
    def push(self, item):
        self.items.append(item)
    # Method to
    def pop(self):
        return self.items.pop()
    # Method to 
    def peek(self):
        return self.items[len(self.items)-1]
    # Method to check the size of the stack
    def size(self):
        return len(self.items)
    # Method to print the stack into the console
    def display(self):
        print(self.items)

html_string_1 = '''<html>
<head>
<title>
An example of simple balanced HTML document
</title>
</head>
<body>
<h1>
Hello, Jupyter Notebook!
</h1>
</body>
</html>
'''

html_string_2 = '''<html>
<head>
<title>
An example of simple unbalanced HTML document
</title>
</head>
<body>
<h1>
Hello, Jupyter Notebook!
</h1>
</html>
'''

def html_checker(symbol_string):
    s = Stack()
    balanced = True
    index = 0
    html_lines = symbol_string.splitlines()

    while index < len(html_lines) and balanced:
        code_string = html_lines[index]
        if code_string.startswith('</') and code_string.endswith('>'):
            if s.is_empty():
                balanced = False
            else:
                s.pop()
        elif code_string.startswith('<') and code_string.endswith('>'):
            s.push(code_string)

        index = index + 1

    if balanced and s.is_empty():
        return True
    else:
        return False
    
print("Does the HTML document represented by html_string_1 have balanced tags? - " + str(html_checker(html_string_1)))
print("Does the HTML document represented by html_string_2 have balanced tags? - " + str(html_checker(html_string_2)))

user_input = []
while True:
    line = input()
    if line == 'q':
        break
    user_input.append(line)

user_string = '\n'.join(user_input)

if html_checker(user_string):
    print("The HTML document you just entered has balanced tags. Good job!")
else:
    print("The HTML document you just entered has unbalanced tags. Please debug!")
