//FUNCTION OVERLOADING
fun showGreeting(){

	println("United States of America greets you")
}
fun showGreeting(name:String){

    println("Welcome, $name")
}
fun showGreeting(name:String, id:Int){

    println("Welcome, $name. Your ID is $id")
}
fun showGreeting(name:String, id:Int, terminal:Char){

    println("Welcome, $name. Your ID is $id, and exit is $terminal")
}

fun main(){
	showGreeting()
    showGreeting("Kunal")
    showGreeting("Kunal", 218058)
    showGreeting("Kunal", 218058, 'A')
}
