public class Widget {
    private static int instanceCount = 0;

    public Widget() {
        instanceCount++;
    }

    public static int getInstanceCount() {
        return instanceCount;
    }

    public static void main(String[] args) {
        new Widget();
        new Widget();
        new Widget();

        System.out.println(Widget.getInstanceCount());
    }
}