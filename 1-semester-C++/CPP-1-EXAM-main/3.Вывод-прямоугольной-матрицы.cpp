// вывод нашей матрицы
cout << "Матрица: " << endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << mat[i][j] << "  ";
    }
    cout << endl;
}

//логика


//удаление памяти
for (int i = 0; i < n; i++)
{
    delete[] mat[i];
}
delete[] mat;
return 0;