// const boxPrototype = {
//   getValue() {
//     return this.value;
//   },
// };

// const boxes = [
//   { value: 1, __proto__: boxPrototype },
//   { value: 2, __proto__: boxPrototype },
//   { value: 3, __proto__: boxPrototype },
// ];


// console.log(boxes[0].__proto__.getValue)


function Box(value) {
  this.value = value;
}
Box.prototype.getValue = function () {
  return this.value;
};
const box = new Box(1);

// Mutate Box.prototype after an instance has already been created
Box.prototype.getValue = function () {
  return this.value + 1;
}; 
console.log( box.getValue()); // 2