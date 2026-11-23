struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body a, Body b)
{
    Body student;
    student.height = (a.height + b.height) / 2 + 5;
    student.weight = (a.weight + b.weight) / 2.0 - 4.5;
    return student;
}
