// Cover and Instructions Pages for GLUT with AIUB Info
#include <windows.h>
#include <GL/glut.h>

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -0.5625, 0.5625); // Set coordinate system to match window size
}

void drawTable()
{
    // Draw grid manually (smaller cells)
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    // Horizontal lines (7 rows)
    glVertex2f(-0.6f, 0.28f);
    glVertex2f(0.6f, 0.28f);
    glVertex2f(-0.6f, 0.20f);
    glVertex2f(0.6f, 0.20f);
    glVertex2f(-0.6f, 0.12f);
    glVertex2f(0.6f, 0.12f);
    glVertex2f(-0.6f, 0.04f);
    glVertex2f(0.6f, 0.04f);
    glVertex2f(-0.6f, -0.04f);
    glVertex2f(0.6f, -0.04f);
    glVertex2f(-0.6f, -0.12f);
    glVertex2f(0.6f, -0.12f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(0.6f, -0.2f);

    // Vertical lines (4 columns)
    glVertex2f(-0.6f, 0.28f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.47f, 0.28f);
    glVertex2f(-0.47f, -0.2f);
    glVertex2f(0.0f, 0.28f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.3f, 0.28f);
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.6f, 0.28f);
    glVertex2f(0.6f, -0.2f);
    glEnd();

    // Add text manually (6 rows � 4 columns)
    renderBitmapString(-0.55f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_12, "SL");
    renderBitmapString(-0.27f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Name");
    renderBitmapString(0.14f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_12, "ID");
    renderBitmapString(0.4f, 0.23f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Contribution");

    renderBitmapString(-0.55f, 0.15f, 0.0f, GLUT_BITMAP_HELVETICA_12, "10");
    renderBitmapString(-0.4f, 0.15f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Kahium Ahamed Fahim");
    renderBitmapString(0.1f, 0.15f, 0.0f, GLUT_BITMAP_HELVETICA_12, "22-48593-3");
    renderBitmapString(0.42f, 0.15f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 1");

    renderBitmapString(-0.55f, 0.07f, 0.0f, GLUT_BITMAP_HELVETICA_12, "11");
    renderBitmapString(-0.4f, 0.07f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Zobayer Al Mahmud");
    renderBitmapString(0.1f, 0.07f, 0.0f, GLUT_BITMAP_HELVETICA_12, "22-47989-2");
    renderBitmapString(0.42f, 0.07f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 2");

    renderBitmapString(-0.55f, -0.01f, 0.0f, GLUT_BITMAP_HELVETICA_12, "12");
    renderBitmapString(-0.4f, -0.01f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Md. Hasib Askari");
    renderBitmapString(0.1f, -0.01f, 0.0f, GLUT_BITMAP_HELVETICA_12, "22-48472-3");
    renderBitmapString(0.42f, -0.01f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 3");

    renderBitmapString(-0.55f, -0.09f, 0.0f, GLUT_BITMAP_HELVETICA_12, "13");
    renderBitmapString(-0.4f, -0.09f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Md. Shahariar Islam Siam");
    renderBitmapString(0.1f, -0.09f, 0.0f, GLUT_BITMAP_HELVETICA_12, "22-48523-3");
    renderBitmapString(0.42f, -0.09f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 4");

    renderBitmapString(-0.55f, -0.17f, 0.0f, GLUT_BITMAP_HELVETICA_12, "14");
    renderBitmapString(-0.4f, -0.17f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Purnandu Bikash Das");
    renderBitmapString(0.1f, -0.17f, 0.0f, GLUT_BITMAP_HELVETICA_12, "22-49609-3");
    renderBitmapString(0.42f, -0.17f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 5");
}

void CoverPage()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);

    renderBitmapString(-0.25f, 0.49f, 0.0f, GLUT_BITMAP_HELVETICA_18, "American International University-Bangladesh");
    renderBitmapString(-0.18f, 0.44f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Faculty of Science and Engineering");
    renderBitmapString(-0.04f, 0.41f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Session: 2024-25");

    renderBitmapString(-0.13f, 0.36f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Course: Computer Graphics");
    renderBitmapString(-0.025f, 0.32f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Section: J");

    drawTable();

    renderBitmapString(-0.54f, -0.26f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Submitted to:");
    renderBitmapString(-0.48f, -0.32f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Mahfujur Rahman");
    renderBitmapString(-0.48f, -0.36f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Assistant Professor");
    renderBitmapString(-0.48f, -0.4f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Department of Computer Science");

    renderBitmapString(-0.54f, -0.48f, 0.0f, GLUT_BITMAP_HELVETICA_18, "Submission Date: 26 June 2025");
    renderBitmapString(0.24f, -0.36f, 0.0f, GLUT_BITMAP_HELVETICA_18, "For Instructions, Press \"i\"");

    glFlush();
}

void InstructionsPage()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw rectangle box for title
    glColor3f(1, 1, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.3f, 0.43f);
    glVertex2f(-0.3f, 0.43f);
    glEnd();
    renderBitmapString(-0.08f, 0.45f, 0.0f, GLUT_BITMAP_HELVETICA_18, "INSTRUCTIONS");

    // Instructions text
    renderBitmapString(-0.9f, 0.3f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Common Keys:");
    renderBitmapString(-0.8f, 0.25f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Next Scene -> right key");
    renderBitmapString(-0.8f, 0.2f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Previous Scene -> left key");

    renderBitmapString(-0.9f, 0.1f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Internal Scene Change:");
    renderBitmapString(-0.8f, 0.05f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Cover to Main Scene -> A");
    renderBitmapString(-0.8f, 0.0f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Main Scene to Cover -> D");

    renderBitmapString(-0.9f, -0.1f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 3:");
    renderBitmapString(-0.8f, -0.15f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Speed Up -> W");
    renderBitmapString(-0.8f, -0.2f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Speed Down -> S");

    renderBitmapString(-0.9f, -0.3f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Scene 5:");
    renderBitmapString(-0.8f, -0.35f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Day -> D");
    renderBitmapString(-0.8f, -0.4f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Night -> N");
    renderBitmapString(-0.8f, -0.45f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Start Moving -> G");
    renderBitmapString(-0.8f, -0.5f, 0.0f, GLUT_BITMAP_HELVETICA_12, "Stop Moving -> L");

    glFlush();
}

void changeDisplay(unsigned char key, int x, int y)
{
    if (key == 'i' || key == 'I')
    {
        glutDisplayFunc(InstructionsPage);
        glutPostRedisplay();
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1280, 720);        // Set the window's initial width & height
    glutInitWindowPosition(80, 50);       // Set the window's initial position according to the monitor
    glutCreateWindow("Ashes and Echoes"); // Create a window with the given title
    init();
    glutDisplayFunc(CoverPage); // Register display callback handler for window re-paint
    glutKeyboardFunc(changeDisplay);

    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
