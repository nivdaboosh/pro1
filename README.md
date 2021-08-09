# pro1

**The Near Neighbor Algorithm** (or k-NN for short) is an unparalleled local classification and regression algorithm. 
In both cases the input depends on the k closest observations in the feature space. k-NN can be used for classification or regression:
k-NN for classification: Given the input of a new example, the algorithm belongs to the group. The example is associated with the most common class among k nearest neighbors (where k is defined as an integer, usually a small number). If k = 1 the object is associated with the class of the nearest single neighbor.
k-NN for Regression: Given a new example, the algorithm returns a sample property value. This value is the average of the k values of the nearest neighbors.

In our project we made a basic model, as a beginning to the project, of the classifier.
We used the class "Iris", that can be changed to an abstract class with 3 inheritors (iris types) or an interface.
We can also add "classified" and "unclassified" classes, to separate between the irises.

In order to run the project, download our implemented classes and then you can run it with 2 csv files.

**classified** - contains 5 values for every Iris. 
width, sepal length, Petal length, Petal width, type.

6.9,4.2,11.9,4.5,Iris-setosa

This data set is already classified - we use it to classify other Irises.

**unclassified** - contains 4 values for every Iris.
width, sepal length, Petal length, Petal width

3.2,7.8,1.2,9.1

This data set isn't classified, so we have to classify it using the "classified" data set.

We implemented the files classified and unclassified.

Clone the git and download the implemented files and classes to your computer. 
We already determined in the code the files that it gets (as classified and unclassified) and the k (as 5) but it can be changed easily.
Run the main class and get the output.txt file (we already implemented it for classified and unclassified).

Good luck !
