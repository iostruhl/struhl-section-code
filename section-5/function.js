const people = [
  {name: "David", wears_black_shirt: true},
  {name: "Isaac", wears_black_shirt: false},
  {name: "Brian", wears_black_shirt: true}
];

// Imperative programming
let black_shirt_wearers_imperative = [];
for (let i = 0; i < people.length; i++) {
  let person = people[i];
  if(person.wears_black_shirt) {
    black_shirt_wearers_imperative.push(person);
  }
}
console.log(black_shirt_wearers_imperative);


// Functional programming approach
function personMap(person) {
  return person.wears_black_shirt;
}

let black_shirt_wearers_functional = [];
black_shirt_wearers_functional = people.filter(personMap);

console.log(black_shirt_wearers_functional);