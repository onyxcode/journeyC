# Scope in C
I decided against making a C file for scope because it's pretty simple in general.

- If you declare a variable inside a function, it is only accesible within that function.
- If you declare a variable outside a function, you can redeclare that variable in any function, however the scope of this definition is confined to the variable.