import os
files = ['test.txt', 'test2.txt', 'test3.txt', 'test_1kb.txt', 'main1.c']

for i, file in enumerate(files):
    print(f'TESTING FILE: {file}')
    os.system(f'./task2_get_next_line < {file}')
    if i < len(files) - 1:
        print('')
