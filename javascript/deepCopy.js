const ingredientsList = ["noodles", { list: ["eggs", "flour", "water"] }];
const ingredientsListDeepCopy = JSON.parse(JSON.stringify(ingredientsList));
// Change the value of the 'list' property in ingredientsListDeepCopy.
ingredientsListDeepCopy[1].list = ["rice flour", "water"];
// The 'list' property does not change in ingredients_list.
console.log(ingredientsList[1].list);
// Array(3) [ "eggs", "flour", "water" ]