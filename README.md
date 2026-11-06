## What is OOP?

OOP -> (Object Oriented Programming)  
-- a methodology (way) of thinking in programming

---

## What is an object?

Any thing that I want to store information about in the program.

---

## What is a class?

A class is the blueprint that all the objects are created from.  
Each object that is created from a class is called an instance of the class.

---

## Why do we need classes?

Suppose we want to add a method or a property to an object we will added normally but if we had a list of object of the same type we will have to add that property manually to all the objects but if we have a class we can manually add that property and all the objects that are a copy of that class will have that property added automatically

Briefly -> if we don't have classes adding a property means editing every object , but with classes we add it once.

---

## What is object comprised of ?

Object

- Data (attributes,data item , data member, properties)
- Operations (functions, methods)

---

## What are operations?

Operations are functions made to manipulate( get, update ,calculate, validate) the attributes.

---

## What are data?

Data are the attributes every object stores

---

## What are access modifiers?

An access modifiers is a keyword that indicates how a class member can be accessed.

- Private -> when a private access modifier is applied to a class member this means that this data member is only accessed within the class and cannot be accessed outside the class
- Public -> when a public access modifier is applied to a class member this means that this data member can be accessed outside or inside the class

---

## What is data hiding?

Data hiding is the concept of protecting the data from wrong usage , Access modifiers are how data are implemented.  
Data hiding helps enforce the integrity of an object's internal data.  
Code outside the class must use the class's public methods to operate on an object's private fields.

---

## What are setters (mutators) and getters(accessors)?

Setters and getters are methods used to read and update the attributes values  
Setters and getters let you validate values, which connects back to data hiding.

- Setter: a method used to change an attribute value.
- Getter: a method used to read an attribute value.

---

> **NOTE:** Classes are treated as a data types

- A parameter is a variable declared inside the method declaration
- A signature is the method name plus its parameter types
- An argument is the actual value you pass whn calling it

> **NOTE:** Functions , operations are used as synonyms of methods in OOP

> **NOTE:** Data members, attributes ,data items and properties carry the same meaning

---

## What are the constructors?

Constructors are functions with special properties :

1. Constructors have no return type (not even void).
2. Constructors have the same name as the class (in Java, C++, C#).
3. Constructors are typically public.
4. Constructors ensure an object starts in a valid state.

---

## Why do we need constructors?

Constructors are used commonly in initializing values.

---

## What are methods overloading? (Java, C++,C#)

Methods overloading -> more than one method has the same name but with different parameters

---

## How to know that the arguments are different?

1. Order of arguments (if they changes).
2. Arguments data types (if it's alone it doesn't count).
3. Number of arguments.

---

> **NOTE:** We can also overload constructors

---

## What is the default constructor?

The default constructor is the no-argument constructor.  
The default constructor is called when we create an object without passing the arguments  
If there is no constructor the compiler auto generates one

---

## Can we use a method inside another method?

Yes we can use a method inside another method instead of typing the method again.  
We reuse the same logic by calling one method from another, this satisfies the concept of reusability.

---

## What are static class members?

Static class members belong to the class itself , not any individual object.

> **Example:** Suppose you want to make a counter that indicates how many objects are created from the class , Without static class members each object has its own counter , no shared counters ,but with static class members they have a shared counter that can be called through the class name.

---

## Can we pass an object as an argument?

Yes, we can.  
Objects are passed as a copy of reference when they are passed as an argument. (in Java ,C# ,Python)

---

## Can we return an object from a method?

Yes, we can return an object from a method ,

- We can create an object inside the method and return it

> **Example:** Suppose we want to add two objects (by adding every value in the first object to its corresponding value in the other object) we will add every value and we will return the result in a new object so we can return Objects from methods.

---
