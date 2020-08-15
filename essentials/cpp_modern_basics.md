# C++ modern basics

## Reference
- C++ Primer

## Copy and move (```lvalue```, ```rvalue```)

```cpp
// ref: https://www.cprogramming.com/c++11/rvalue-references-and-move-semantics-in-c++11.html

// lvalue: provides a (semi)permanent piece of memory
// rvalue: a temporary object

// copy (without std::move()) is more time-expensive
std::move(lvalue) => rvalue
```

## Lambda function

```cpp
// ref: https://lospi.net/c++/developing/software/visual%20studio/2015/03/11/lambdas-and-cpp11.html

std::transform(words.begin(), words.end(), result.begin(),
    [&](int x){ return x + a - b; } // all passed by reference
    //[=](int x){ return x + a - b; } // all passed by value
    //[a, &b](int x){ return x + a - b; } // a passed by value, b passed by reference
);
```

## Smart pointer

```cpp
shared_ptr<int> // increment counter when b = a
unique_ptr<int> // always do std::move() when b = a