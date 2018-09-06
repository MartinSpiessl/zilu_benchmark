import os
import sys
import os.path

dir = os.path.abspath(sys.argv[1])
assert os.path.isdir(dir)
files = os.listdir(dir)
# print("files: " + str(files))
files.sort(key=lambda file: int(file[:-4]))
print("files: " + str(files))
index = 1
for filename in files:
    newfilename = '%02d.cfg' % index
    print('rename ' + dir + '/' + filename + ' ----> ' + dir + '/' + newfilename)
    os.rename(dir+'/'+filename, dir+'/'+newfilename)
    index +=1
