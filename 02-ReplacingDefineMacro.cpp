/*!
 * @brief Trying not to use #define macro.
 * @note Item 2
 */

/*! #00
 * Defining a Constant Pointer.
 * Both "pointer" and "value that pointer point to" is declared const
 * because more often than not, this header file will be included in many source files.
 */
const char *const ASPECT_RATIO = "12";

class Generic
{
private:
    /*! #01
     * Declaring class-specific const. Make it static.
     * Can't make class specific #define MACRO i.e. no encapsulation.
     */
    static const int NumTurns = 5;
    int scores[NumTurns];
};