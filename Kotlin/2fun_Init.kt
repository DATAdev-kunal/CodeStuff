//DIFFERENT WAY OF INITIALIZING FUNCTIONS
//& PRINTING FUNCTION WITHIN A FUNCTION

fun getAddition(num1:Int, num2:Int):Int{

    return num1+num2
}

fun getAddition(num1:Int, num2:Int):Int = num1+num2

fun showGreetings(name:Int){

    println("Welcome, $name")
}

fun showMessage():Unit{
   
    println("hello Ji")
}

fun main(){

    var total= getAddition(12,5)

    println("Addition is $total")
    
    println("addition is ${getAddition(12,8)}")

    showGreetings(18)

    showMessage()
}
