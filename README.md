# Quadratical
A console program for solving quadratic equations

The program has 4 files.

<h4>main.cpp</h4> // main scope of the program.


<h4>pch.h</h4> // where all the headers are included. It must also be added to all source files (.cpp files).


<h4>Equation.cpp</h4> // class/blueprint for the program.


<h4>Equation.h</h4> // where all data members & methods implemented in 'Equation.cpp' are declared.


<h4>Version Notes</h4> // A brief summary of what a version of the program contains, and what it will contain in future versions.


<h5>Core Process of the program</h5>

While implementing the mathematical method to solve the quadratic equations, I refrained from using the 'almighty formula'.
Instead, I decided to try a different method. 

Every quadratic equation consists of a quadratic term (Qterm), linear term (Lterm) and a constant term (Cterm) such that,

ax<sup>2</sup> + bx + c = 0

ax<sup>2</sup> = Qterm,  bx = Lterm  and c = Cterm.

This method utilized in the program involves:

multiplying Qterm with Cterm (Qterm x Cterm)

finding factors of (Qterm x Cterm) so that when added or subtracted, gives the exact value of Lterm and when multiplied, gives the exact value of (Qterm x Cterm)

And finally, reversing the signs of the factors found, such that (-3) will be 3. Beacuse x - 3 = 0, x = 3.
