## WELCOME OOP WORLD

This project starts from a simple Hello World program. The idea is to adopt as many as possible Object Oriented Design patterns (also with enforced design choices) in order to practice with them and to show how easy it is to pile abstractions even in the simplest possible project.

# SOLID Principles

Single Responsability:
Exploited in class WhiteSpace, and AlphabetLetter - Every Class is responsable for handling a single char of the type that the class defines.

Open-Closed:
Exploited in class Character - The architecture can be easily extended for NumericCharacters or Punctuation classes.

Liskov Substitution:
Exploited in the Displayer's display() function. It can be execute by a vector of child or parent elements.

Interface Segregation:
not yet introduced - It is not possible, with the current design, to turn Character into ICharacter and, applying the Interface Segregation, change it into IAlphbetLetter and IWhiteSpace
UPDATE: added ICharacter interface but still it does not exploit interface segregation.

Dependency Inversion:
The current implementation stores the character variable inside the parent Character class abstraction, this is not a optimal considering dependency inversion principle. A better approach would be to have two different interfaces 





