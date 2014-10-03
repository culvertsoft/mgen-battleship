package battleship.util;

import java.util.ArrayList;

public class ListUtil {

	@SafeVarargs
	public static <T> ArrayList<T> create(final T... items) {
		return create2(items);
	}

	private static <T> ArrayList<T> create2(final T[] items) {
		final ArrayList<T> out = new ArrayList<>();
		for (final T t : items) {
			out.add(t);
		}
		return out;
	}

}
