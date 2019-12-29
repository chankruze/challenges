import Foundation

if let typed = readLine() {
    if let criminals = Int(typed) {
        if criminals < 5 {
            print("I got this!")
        } else if criminals < 10 {
            print("Help me Batman")
        } else {
            print("Good Luck out there!")
        }
    }
}
