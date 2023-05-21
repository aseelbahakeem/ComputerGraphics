#include <Windows.h> //for windows
#include <GL/glut.h> //glut include glut.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	// Set background color to black and opaque

	glBegin(GL_TRIANGLES);
	glClearColor(0.3f, 0.5f, 0.3f, 0.0f);

	

	// Clear the color buffer (background)
	glClear(GL_COLOR_BUFFER_BIT);

	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS); // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.5f); // x, y
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
	// Initialize GLUT
	glutInit(&argc, argv);

	// Set the window's initial width & height
	glutInitWindowSize(320, 320);

	// Position the window's initial top-left corner
	glutInitWindowPosition(50, 50);

	// Create a window with the given title
	glutCreateWindow("OpenGL Setup Test");

	// Register display callback handler for window re-paint
	glutDisplayFunc(display);

	// Enter the event-processing loop
	glutMainLoop();

	return 0;
}
