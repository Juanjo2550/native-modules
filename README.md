# Usage
First, install all dependencies:
```
npm i
```
Additional you need to install `node-gyp` globally in your system:
```
npm i -g node-gyp
```
Now configure native module:
```
node-gyp configure
```
Finally, you need to recompile all native modules:
```
node-gyp rebuild
```
Now you're ready to go. :)
