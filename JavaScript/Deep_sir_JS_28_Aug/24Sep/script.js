let str ='Lorem ipsum dolor sit, amet consectetur adipisicing elit. Vero illo quisquam iure quia fugit, saepe officiis nisi voluptatem delectus aliquid voluptas eveniet! Magni ut, saepe laudantium officiis autem exercitationem nobis.';

let output = str.toUpperCase(str);
console.log(output)

let output1 = str.toLowerCase(str);
console.log(output1);

console.log(str.trim());
console.log(str.charCodeAt(0));
console.log(str.charAt(78));
console.log(str.includes("Lorem"));
let result = str.match(/lorem/g);
console.log(str.indexOf(","));