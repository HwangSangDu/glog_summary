#include <glog/logging.h>
#include <iostream>


/* 
1. logtostderr (bool, default=false)
Log messages to stderr instead of logfiles.
Note: you can set binary flags to true by specifying 1, true, or yes (case insensitive). Also, you can set binary flags to false by specifying 0, false, or no (again, case insensitive).

2. stderrthreshold (int, default=2, which is ERROR)
Copy log messages at or above this level to stderr in addition to logfiles. The numbers of severity levels INFO, WARNING, ERROR, and FATAL are 0, 1, 2, and 3, respectively.

3. minloglevel (int, default=0, which is INFO)
Log messages at or above this level. Again, the numbers of severity levels INFO, WARNING, ERROR, and FATAL are 0, 1, 2, and 3, respectively.


4. log_dir (string, default="")
If specified, logfiles are written into this directory instead of the default logging directory.

5. v (int, default=0)
Show all VLOG(m) messages for m less or equal the value of this flag. Overridable by --vmodule. See the section about verbose logging for more detail.
vmodule (string, default="")
Per-module verbose level. The argument has to contain a comma-separated list of <module name>=<log level>. <module name> is a glob pattern (e.g., gfs* for all modules whose name starts with "gfs"), matched against the filename base (that is, name ignoring .cc/.h./-inl.h). <log level> overrides any value given by --v. See also the section about verbose logging. 
*/


using namespace std;
int main(int argc, char* argv[]) 
{

    // 주의할 점으로는 InitGoogleLogging하기 전에 FLAG_ 옵션을 마무리 지어야 한다.
    // 명령어로 옵션을 걸 수 있다 [GLOG_]

    // FLAGS_logtostderr = 0;
    // FLAGS_logtostderr = 1;

    // FLAGS_stderrthreshold = 1
    FLAGS_log_dir="./tmp";



    cout << argv[0] << endl;
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "INFO";   
    LOG(ERROR) << "ERROR";
    // LOG(FATAL) << "FATAL";
    LOG(WARNING) << "WARNING";
    // LOG(INFO) << "INFO";
    return 0;
}