package battleship.util;

import java.util.ArrayList;
import java.util.List;

public class Speaker<ListenerType> {

	public void dispatch(final Action action) {
		for (final ListenerType listener : m_listeners) {
			action.apply(listener);
		}
	}

	public void addListener(ListenerType listener) {
		m_listeners.add(listener);
	}

	public void removeListener(ListenerType listener) {
		m_listeners.remove(listener);
	}

	public abstract class Action {
		public abstract void apply(final ListenerType listener);
	}

	private final List<ListenerType> m_listeners = new ArrayList<ListenerType>();
}
