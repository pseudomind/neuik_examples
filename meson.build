project('neuik_examples', 'c', version : '0.0.10')

sdl2_dep = dependency('SDL2')

neuik_dep = dependency(
    'libneuik', fallback : ['libneuik', 'libneuik_dep'])

all_deps = [
    sdl2_dep,
    neuik_dep,
]

examples = [
    '00-helloWorld',
    '01-blank',
    # '02-mainMenu',
    '03-hasButton',
    '04-vGroup',
    '05-hGroup',
    '06-calculator',
    '07-textEntry',
    '08-wetbulbCalc',
    '09-progressCountdown',
    '10-timeSinceStarted',
    '11-hideAndShow',
    '12-windowConfigure',
    '13-eventHandler',
    '14-stack',
    '15-comboBox',
    # '16-popupVisual',
    '17-flowGroup',
    '18-listGroup',
    '19-errorReporter',
    '20-hasImage',
    '21-textEdit',
    '22-rotated',
    '23-celgroup',
    '24-canvas',
    '25-plot2d',
    '26-gridLayout',
    '27-fill',
    # '99-debug',
]

ctr = 0
foreach example : examples
    example_name = example.split('-')[1]
    source_main = 'src/@0@/main-@1@.c'.format(example, example_name)

    executable(example, source_main,
        dependencies : all_deps, 
        install : false)

    ctr+=1
endforeach