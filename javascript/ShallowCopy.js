const ingredientsList = ["noodles", { list: ["eggs", "flour", "water"] }];

const ingredientsListCopy = Array.from(ingredientsList);
// ["noodles",{"list":["eggs","flour","water"]}]


ingredientsListCopy[1].list = ["rice flour", "water"];

ingredientsListCopy[0] = "rice noodles";

console.log(ingredientsListCopy, 'this is ingridentslist')
// console.log(ingredientsList[0]); // noodles
// console.log(JSON.stringify(ingredientsListCopy));
// // ["rice noodles",{"list":["rice flour","water"]}]
// console.log(JSON.stringify(ingredientsList));
// ["noodles",{"list":["rice flour","water"]}]