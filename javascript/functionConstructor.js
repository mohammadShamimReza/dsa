// const sum = new Function("a", "b", "return a + b");

// console.log(sum(2, 6));

// function sayHello() {
//   return "Hello, ";
// }
// function greeting(helloMessage, name) {
//   console.log(helloMessage() + name);
// }
// // Pass `sayHello` as an argument to `greeting` function
// greeting(sayHello, "JavaScript!");
// // Hello, JavaScript!

function sayHello() {
  return (me) => {
    console.log(me);
  };
}

sayHello()("shamim");