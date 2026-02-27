// function func(a, b, c) {
//     console.log(arguments);
//     console.log(arguments[0], 'argument 1')
//     console.log(arguments[1], 'argument 2')
//     console.log(arguments[2], 'argument 3')
// }

// func(1, 2, 3)

// function functionwithoutdefault(a) {
    // console.log(arguments[0])
    // console.log(a);
    // console.log(arguments.length)
//     var arg = Array.prototype.slice.call(arguments)
//     console.log(arg)
// }

// functionwithoutdefault(5)

getAge(1999);

let getAge = function currentage(yearOfBirth) {
  console.log(new Date().getFullYear() - yearOfBirth);
};

// getAge(1999);


console.log(getAge)