# WELCOME OOP WORLD

This project starts from a simple Hello World program. The idea is to adopt as many as possible Object Oriented Design patterns (also with enforced design choices) in order to practice with them and to show how easy it is to pile abstractions even in the simplest possible project.

## SOLID Principles

__Single Responsability__:
Exploited in class WhiteSpace, and AlphabetLetter - Every Class is responsable for handling a single char of the type that the class defines.

__Open-Closed__:
Exploited in class Character - The architecture can be easily extended for NumericCharacters or Punctuation classes.

__Liskov Substitution__:
Exploited in the Displayer's display() function. It can be execute by a vector of child or parent elements.

__Interface Segregation__:
not yet introduced - It is not possible, with the current design, to turn Character into ICharacter and, applying the Interface Segregation, change it into IAlphbetLetter and IWhiteSpace
_UPDATE_: added ICharacter interface but still it does not exploit interface segregation.

__Dependency Inversion__:
The current implementation stores the character variable inside the parent Character class abstraction, this is not a optimal considering dependency inversion principle. A better approach would be to have two different interfaces 





