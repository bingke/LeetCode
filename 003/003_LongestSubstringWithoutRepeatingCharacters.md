关键之处在于如何记录已经匹配上的字符。

代码虽然被AC，仍然存在问题：
1.很多次都不被AC的原因是因为报了一个"runtime error: variable length array bound evaluates to non-positive value 0"这样的错误，无从下手解决。
经过查询，结论是在定义数组时，不允许数组长度为0。而最开始是使用的int count[s.size()]定义数组，而s.size（）的取值可能为0，所在被认为是非法的。[详情查询这里](https://stackoverflow.com/questions/24082557/variable-length-array-with-length-0)
2.问题也还是出在记录最大值的数组。问题被AC是因为定义了一个巨大的数组，但是在实际运用中是在不可取的，如果字符串长度小，会造成巨大的资源浪费。
