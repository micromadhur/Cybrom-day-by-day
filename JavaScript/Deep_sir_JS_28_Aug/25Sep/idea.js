let obj  ={
    name:"madhur",  /// method and function
    // array  
    "course":"FSD",
    'batch':"p33",
    "num":45,
    "bool":10<11,
    run:function(){
        // console.log("this is method call")
        console.log(this.num + this.num1); //this 
    },
    arr:[5,5,7,77,8,8]
}
console.log(obj.name)
console.log(obj.course)
console.log(obj.batch)
console.log(obj.bool)
obj.run()
console.log(obj.arr[4])

//Destructuring of object

let {num1,num,course} = obj;

console.log(obj.name)
console.log(course)
console.log(num1)
console.log(num)
obj.run()
console.log(obj.arr[4])