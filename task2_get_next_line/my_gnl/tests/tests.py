import os
files = ['test.txt', 'test2.txt', 'test3.txt', 'test_1kb.txt']

for i, file in enumerate(files):
    print(f'TESTING FILE: {file}')
    os.system(f'./gnl {file}')
    if i < len(files) - 1:
        print('')