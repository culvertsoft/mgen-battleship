package battleship.util;

import static se.culvertsoft.mgen.javapack.serialization.BuiltInReader.EMPTY_INPUT_STREAM;
import static se.culvertsoft.mgen.javapack.serialization.BuiltInWriter.EMPTY_OUTPUT_STREAM;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;

import se.culvertsoft.mgen.javapack.serialization.BinaryReader;
import se.culvertsoft.mgen.javapack.serialization.BinaryWriter;
import se.culvertsoft.mgen.javapack.serialization.JsonPrettyWriter;
import se.culvertsoft.mgen.javapack.serialization.JsonReader;
import se.culvertsoft.mnet.DataMessage;
import battleship.ClassRegistry;
import battleship.messages.Message;

public class Serializer {

	public synchronized byte[] writeBinary(final Message message) throws IOException {
		m_binWriter.writeObject(message);
		final byte[] out = m_bos.toByteArray();
		m_bos.reset();
		return out;
	}

	public synchronized String writeJson(final Message message) throws IOException {
		return m_jsonWriter.writeObjectToString(message);
	}

	public synchronized Message readBinary(final byte[] data) throws IOException {
		final ByteArrayInputStream bis = new ByteArrayInputStream(data);
		return m_binaryReader.setInput(bis).readObject(data, Message.class);
	}

	public synchronized Message read(final DataMessage container) throws IOException {
		if (container.hasBinaryData()) {
			return readBinary(container.getBinaryData());
		} else if (container.hasStringData()) {
			return readJson(container.getStringData());
		}
		throw new IOException("Tried reading DataMessage " + container
				+ ", but it did not contain any data.");
	}

	public synchronized Message readJson(final String data) throws IOException {
		return m_jsonReader.readObject(data, Message.class);
	}

	public synchronized void reset() {
		m_bos.reset();
	}

	private final ClassRegistry m_classRegistry = new ClassRegistry();
	private final ByteArrayOutputStream m_bos = new ByteArrayOutputStream();
	private final BinaryWriter m_binWriter = new BinaryWriter(m_bos, m_classRegistry, true);
	private final JsonPrettyWriter m_jsonWriter = new JsonPrettyWriter(
			EMPTY_OUTPUT_STREAM,
			m_classRegistry,
			true);
	private final BinaryReader m_binaryReader = new BinaryReader(
			EMPTY_INPUT_STREAM,
			m_classRegistry);
	private final JsonReader m_jsonReader = new JsonReader(EMPTY_INPUT_STREAM, m_classRegistry);

}
