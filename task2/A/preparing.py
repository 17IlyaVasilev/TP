header = "index.h"

code = """

bool A_checker()
{
    return true;
}
"""

ffile = open(header, "w")
ffile.write(code)
ffile.close()
