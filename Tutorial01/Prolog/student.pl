student(john). 
student(mary). 

takes(john, programming). 
takes(mary, algorithms). 

studies(X, programming) :- 
    student(X), 
    takes(X, programming).