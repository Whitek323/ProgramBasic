import PY.dashboard.ex1 as ex1
import dash_core_components as dcc
import dash_html_components as html
# Create a Dash Application
app = ex1.Dash(__name_)
# Define the layout of the Dashboard
app.layout = html.Div(
    children=[
        html.H1('My Dashboard'),
            dcc.Graph(
                id="My-Graph",
                figure={
                    'Data':[
                        {'name': 'Bar chart'),
                        'layout' : (
                        'title': 'Graph title'.