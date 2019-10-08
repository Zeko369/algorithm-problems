class anglesOfAClock {
  public static void main(String[] args) {
    System.out.println(calcAngle(3, 30)); // 75
    System.out.println(calcAngle(12, 30)); // 165
  }

  public static int calcAngle(int h, int m) {
    int hour = (int)(h / 12.0 * 360.0 + m / 60.0 * (360.0 / 12.0));
    int minutes = (int)(m / 60.0 * 360.0);
    int tmp = Math.max(minutes, hour) - Math.min(minutes, hour);
    return tmp >= 180 ? 360 - tmp : tmp;
  }
}
