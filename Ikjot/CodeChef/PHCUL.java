import java.util.*;
public class Main{
public static void main(String args[]){physicalExercise();}
public static void physicalExercise() {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        while(T-- > 0) {
            long x = scan.nextLong();
            long y = scan.nextLong();
            int N = scan.nextInt();
            int M = scan.nextInt();
            int K = scan.nextInt();
            long[] nX = new long[N];
            long[] nY = new long[N];
            long[] mX = new long[M];
            long[] mY = new long[M];
            long[] kX = new long[K];
            long[] kY = new long[K];
            for(int i = 0; i < N; i++) {
                nX[i] = scan.nextLong();
                nY[i] = scan.nextLong();
            }
            for(int i = 0; i < M; i++) {
                mX[i] = scan.nextLong();
                mY[i] = scan.nextLong();
            }
            for(int i = 0; i < K; i++) {
                kX[i] = scan.nextLong();
                kY[i] = scan.nextLong();
            }
            double distance1;
            double distance2;
            double distance3;
            double distance;
            double minDistance = -1;
            for(int i = 0; i < N; i++) {
                distance1 = distance(x, y, nX[i], nY[i]);
                if(distance1 > minDistance && minDistance != -1) {
                    continue;
                }
                for(int j = 0; j < M; j++) {
                    distance2 = distance(nX[i] ,nY[i], mX[j], mY[j]);
                    if(distance1 + distance2 > minDistance && minDistance != -1) {
                        continue;
                    }
                    for(int k = 0; k < K; k++) {
                        distance3 = distance(mX[j], mY[j], kX[k], kY[k]);
                        distance = distance1 + distance2 + distance3;
                        if(distance < minDistance || minDistance == -1) {
                            minDistance = distance;
                        }
                    }
                }
            }
            for(int i = 0; i < M; i++) {
                distance1 = distance(x, y, mX[i], mY[i]);
                if(distance1 > minDistance && minDistance != -1) {
                    continue;
                }
                for(int j = 0; j < N; j++) {
                    distance2 = distance(mX[i], mY[i], nX[j] ,nY[j]);
                    if(distance1 + distance2 > minDistance && minDistance != -1) {
                        continue;
                    }
                    for(int k = 0; k < K; k++) {
                        distance3 = distance(nX[j], nY[j], kX[k], kY[k]);
                        distance = distance1 + distance2 + distance3;
                        if(distance < minDistance || minDistance == -1) {
                            minDistance = distance;
                        }
                    }
                }
            }
            System.out.format("%.10f", minDistance);
            System.out.println();
        }
    }

    public static double distance(long a, long b, long c, long d) {
        return Math.sqrt((a - c)*(a - c) + (b - d)*(b - d));
    }
}
