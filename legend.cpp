/*学习古代诗词
岳阳楼记 北宋·范仲淹

庆历四年春，滕子京谪守巴陵郡。越明年，政通人和，百废具兴，乃重修岳阳楼，增其旧制，刻唐贤今人诗赋于其上；属予作文以记之。

予观夫巴陵胜状，在洞庭一湖。衔远山，吞长江，浩浩汤汤，横无际涯；朝晖夕阴，气象万千；此则岳阳楼之大观也，前人之述备矣。然则北通巫峡，南极潇湘，迁客骚人，多会于此，览物之情，得无异乎？

若夫霪雨霏霏，连月不开；阴风怒号，浊浪排空；日星隐曜，山岳潜形；商旅不行，樯倾楫摧；薄暮冥冥，虎啸猿啼。登斯楼也，则有去国怀乡，忧谗畏讥，满目萧然，感极而悲者矣。

至若春和景明，波澜不惊，上下天光，一碧万顷；沙鸥翔集，锦鳞游泳，岸芷汀兰，郁郁青青。而或长烟一空，皓月千里，浮光跃金，静影沉璧，渔歌互答，此乐何极。登斯楼也，则有心旷神怡，宠辱皆忘，把酒临风，其喜洋洋者矣。

嗟夫！予尝求古仁人之心，或异二者之为，何哉？不以物喜，不以己悲。居庙堂之高，则忧其民；处江湖之远，则忧其君。是进亦忧，退亦忧；然则何时而乐耶？其必曰：“先天下之忧而忧，后天下之乐而乐”欤！噫！微斯人，吾谁与归？
*/
// Generated at 2020-10-16 19:43:00 UTC+8
// Created by Alphagocc
#include <bits/stdc++.h>
#ifdef USE_PBDS
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#endif
using namespace std;
#define FI __inline__ __attribute__((always_inline))
#define TN typename
#define TP template
#define TS *this
class IO
{
    static const int bufSize = 1 << 18;
    char inBuf[bufSize], outBuf[bufSize];
    char *ip1 = inBuf, *ip2 = inBuf;
    int ok = 1, op1 = -1, op2 = bufSize - 1;
    TP<TN T> FI void __RI(T &x)
    {
        int ch = gc(), neg = 1;
        x = 0;
        for (; !(ch == EOF || isdigit(ch) || ch == '-'); ch = gc())
            ;
        if (ch == EOF)
        {
            ok = 0;
            return;
        }
        if (ch == '-')
            neg = -1, ch = gc();
        for (; isdigit(ch); ch = gc())
            x = x * 10 + (ch - 48) * neg;
    }
    TP<TN T> FI void __RC(T &x)
    {
        unsigned char ch;
        while (isspace(ch = gc()))
            ;
        if (ch == EOF)
        {
            ok = 0;
            return;
        }
        x = ch;
    }
    FI void __RS(string &x)
    {
        char ch;
        x.clear();
        for (ch = gc(); isspace(ch); ch = gc())
            ;
        if (ch == EOF)
        {
            ok = 0;
            return;
        }
        for (; !isspace(ch); ch = gc())
            x.push_back(ch);
    }

public:
    FI int gc() { return ip1 == ip2 && (ip2 = (ip1 = inBuf) + fread(inBuf, 1, bufSize, stdin), ip1 == ip2) ? EOF : *ip1++; }
    FI IO &R(char &x)
    {
        __RC(x);
        return TS;
    }
    FI IO &R(unsigned char &x)
    {
        __RC(x);
        return TS;
    }
    FI IO &R(string &x)
    {
        __RS(x);
        return TS;
    }
    TP<TN T1, TN T2> FI IO &R(pair<T1, T2> &x)
    {
        R(x.first), R(x.second);
        return TS;
    }
    TP<TN T> FI IO &R(vector<T> &x)
    {
        for (auto &i : x)
            R(i);
        return TS;
    }
    TP<TN T, TN... Args> FI IO &RA(T *a, int n)
    {
        for (int i = 0; i < n; ++i)
            R(a[i]);
        return TS;
    }
    TP<TN T, TN... Args> FI IO &R(T &x, Args &...args)
    {
        R(x), R(args...);
        return TS;
    }
    TP<TN T, TN... Args> FI IO &RA(T *a, int n, Args... args)
    {
        for (int i = 0; i < n; ++i)
            RA(a[i], args...);
        return TS;
    }
    TP<TN T> FI IO &R(T &x)
    {
        static_assert(is_integral<T>::value, "Unsupported types");
        if (is_integral<T>::value)
            __RI(x);
        return TS;
    }

private:
    char space = ' ';
    TP<TN T> FI void __WI(T x)
    {
        static char buf[64];
        static int len = -1;
        if (x >= 0)
        {
            do
            {
                buf[++len] = x % 10 + 48, x /= 10;
            } while (x);
        }
        else
        {
            pc('-');
            do
            {
                buf[++len] = -(x % 10) + 48, x /= 10;
            } while (x);
        }
        while (len >= 0)
        {
            pc(buf[len]), --len;
        }
    }

public:
    FI void pc(const char &x)
    {
        if (op1 == op2)
            flush();
        outBuf[++op1] = x;
    }
    FI void flush() { fwrite(outBuf, 1, op1 + 1, stdout), op1 = -1; }
    FI IO &W(const char &x)
    {
        pc(x);
        return TS;
    }
    FI IO &W(const char *x)
    {
        while (*x != '\0')
            pc(*(x++));
        return TS;
    }
    FI IO &W(const string &x)
    {
        W(x.c_str());
        return TS;
    }
    TP<TN T> FI IO &W(const vector<T> &x)
    {
        for (auto &i : x)
            WS(i);
        WL();
        return TS;
    }
    FI IO &WL()
    {
        W('\n');
        return TS;
    }
    TP<TN T1, TN T2> FI IO &W(const pair<T1, T2> &x)
    {
        WS(x.first), W(x.second);
        return TS;
    }
    TP<TN T> FI IO &WL(const T &x)
    {
        W(x), W('\n');
        return TS;
    }
    FI IO &WS()
    {
        W(' ');
        return TS;
    }
    TP<TN T> FI IO &WS(const T &x)
    {
        W(x), W(space);
        return TS;
    }
    TP<TN T> FI IO &WA(T *a, int n)
    {
        for (int i = 0; i < n; i++)
            WS(a[i]);
        WL();
        return TS;
    }
    TP<TN T, TN... Args> FI IO &W(const T &x, const Args &...args)
    {
        W(x), W(space), W(args...);
        return TS;
    }
    TP<TN... Args> FI IO &WL(const Args &...args)
    {
        W(args...), W('\n');
        return TS;
    }
    TP<TN T, TN... Args> FI IO &WA(T *a, int n, Args... args)
    {
        for (int i = 0; i < n; i++)
            WA(a[i], args...);
        return TS;
    }
    TP<TN T> FI IO &W(const T &x)
    {
        static_assert(is_integral<T>::value, "Unsupported types");
        if (is_integral<T>::value)
            __WI(x);
        return TS;
    }
    TP<TN T> FI IO &operator>>(T &x)
    {
        R(x);
        return TS;
    }
    TP<TN T> FI IO &operator<<(const T &x)
    {
        W(x);
        return TS;
    }
    bool good() { return ok; }
    IO() {}
    ~IO() { flush(); }
} io;
#undef TN
#undef TP
#undef FI
#undef TS
#define REP(i, x, y) for (int i = x; i < y; i++)
#define ALL(x) x.begin(), x.end()
const int32_t INF = 0x3f3f3f3f;
const int64_t INFL = 0x3f3f3f3f3f3f3f3fLL;

int main()
{
    int n, m;
    io >> n >> m;
    vector<int> a(n), b(m);
    io >> a >> b;
    sort(ALL(a));
    for (auto i : b)
    {
        io.WS(upper_bound(ALL(a), i) - a.begin());
    }
    return 0;
}