/* GULP PLUGINS */
var gulp = require('gulp');
var autoprefixer = require('gulp-autoprefixer');
var clean = require('gulp-clean');
var concat = require('gulp-concat');
var connect = require('gulp-connect');
var exec = require('gulp-exec');
var sass = require('gulp-ruby-sass');

/* GULP TASKS */

gulp.task('clean-styles', function() {
    gulp.src('./assets/styles/*.css', {read: false})
        .pipe(clean());
});

gulp.task('clean-markup', function() {
    gulp.src('./*.html', {read: false})
        .pipe(clean());
});

gulp.task('sass', function() {
  gulp.src('./assets/styles/scss/**/*.scss')
    .pipe(sass({ style: 'expanded' }))
    .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
    .pipe(gulp.dest('./assets/styles'))
    ;
});

gulp.task('hologram', function() {
    gulp.src('')
        .pipe(exec('hologram'));
});

gulp.task('connect', function() {
  connect.server({
    root: ['./'],
    port: 1337,
    livereload: false
  });
});

// gulp.task('html', function () {
//    gulp.src('./styleguide/**/*.html')
//      .pipe(connect.reload());
// });

// gulp.task('watch', function () {
//    gulp.watch(['./styleguide/**/*.html'], ['html']);
// });

// gulp.task('default', ['connect', 'watch']);

gulp.task('build', function() {
  gulp.run('clean-styles');
  gulp.run('clean-markup');
  gulp.run('sass');
  gulp.run('hologram');
});